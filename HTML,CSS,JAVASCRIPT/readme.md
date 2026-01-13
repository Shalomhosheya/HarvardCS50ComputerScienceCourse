# 🌐 `curl` Website Inspection – Quick Notes

Clean, simple notes for using **`curl`** to inspect websites from the terminal.

---

## 📌 View HTTP Headers

Use this command to see **only the response headers** of a website:

```bash
curl -I http://www.harvard.edu/
```

### 🔎 Why this is useful

* Check server response status
* Debug redirects
* Inspect security headers

---

## 📊 Common HTTP Status Codes

| Code    | Meaning                    |
| ------- | -------------------------- |
| **200** | OK – Request successful    |
| **301** | Moved Permanently          |
| **302** | Found (Temporary redirect) |
| **304** | Not Modified               |
| **307** | Temporary Redirect         |
| **401** | Unauthorized               |
| **404** | Not Found                  |
| **500** | Internal Server Error      |
| **503** | Service Unavailable        |

---

## 📄 View Website Source Code (HTML)

To fetch the **raw HTML source** of a website:

```bash
curl http://www.harvard.edu/
```

This prints the entire page source directly in the terminal.

---

## 🔁 Command Comparison

| Command                   | Output            |
| ------------------------- | ----------------- |
| `curl http://site.com`    | Full HTML source  |
| `curl -I http://site.com` | HTTP headers only |

---

## 💡 Pro Tips

* Use `-I` for backend debugging and status checks
* Use normal `curl` to inspect page structure or API responses
* Combine with `| less` for long outputs

```bash
curl http://site.com | less
```

---

📝 *Great for CS50 notes, backend learning, and web debugging.*
